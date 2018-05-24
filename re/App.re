open Navigation;

type state = {drawerOpen: bool};

type action =
  | HideDrawer
  | ShowDrawer
  | ToggleDrawer;

module Main = {
  let component = ReasonReact.reducerComponent("App");
  let make = _children => {
    ...component,
    initialState: () => {drawerOpen: false},
    reducer: (action, state) => {
      Js.log((action, state));
      switch (action) {
      | ShowDrawer => ReasonReact.Update({drawerOpen: true})
      | HideDrawer => ReasonReact.Update({drawerOpen: false})
      | ToggleDrawer => ReasonReact.Update({drawerOpen: ! state.drawerOpen})
      };
    },
    render: self =>
      <StackNavigator initialState=[|Config.Welcome|]>
        ...(
             (~currentRoute, ~navigation) =>
               <BsNativeBase.Drawer
                 drawerType=Overlay
                 drawerOpen=self.state.drawerOpen
                 content={<Sidebar />}
                 onClose=(() => self.send(HideDrawer))>
                 (
                   switch (currentRoute) {
                   | Config.Welcome =>
                     <Welcome
                       navigation
                       toggleDrawer=(() => self.send(ToggleDrawer))
                     />
                   | Config.HeaderScreen =>
                     <HeaderScreen
                       navigation
                       toggleDrawer=(() => self.send(ToggleDrawer))
                     />
                   }
                 )
               </BsNativeBase.Drawer>
           )
      </StackNavigator>,
  };
};

let app = () => <Main />;

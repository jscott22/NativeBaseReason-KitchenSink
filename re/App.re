open Navigation;

open BsReactNative;

[@bs.module "../../../theme/components/index"]
external getTheme : Js.t('a) => Js.t('b) = "default";

[@bs.module "../../../theme/variables/commonColor"]
external variables : Js.t('a) = "default";

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
    reducer: (action, state) =>
      switch (action) {
      | ShowDrawer => ReasonReact.Update({drawerOpen: true})
      | HideDrawer => ReasonReact.Update({drawerOpen: false})
      | ToggleDrawer => ReasonReact.Update({drawerOpen: ! state.drawerOpen})
      },
    render: self =>
      <BsNativeBase.StyleProvider style=(getTheme(variables))>
        <StackNavigator
          initialState=[|Route.Welcome|] headerComponent=Foo.make>
          ...(
               (~currentRoute, ~navigation) =>
                 <BsNativeBase.Drawer
                   drawerType=Overlay
                   drawerOpen=self.state.drawerOpen
                   content={
                     <Sidebar
                       navigation
                       hideDrawer=(() => self.send(HideDrawer))
                     />
                   }
                   onClose=(() => self.send(HideDrawer))>
                   (
                     switch (currentRoute) {
                     | Route.Welcome =>
                       <Screens.Welcome
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.Header =>
                       <Screens.Header
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.Anatomy =>
                       <Screens.Anatomy
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.Footer =>
                       <Screens.Footer
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHBadge =>
                       <Screens.NHBadge
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.Button =>
                       <Screens.Button
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.ButtonOutline =>
                       <Screens.ButtonOutline navigation />
                     | Route.ButtonDefault =>
                       <Screens.ButtonDefault navigation />
                     | Route.ButtonRounded =>
                       <Screens.ButtonRounded navigation />
                     | Route.NHCard =>
                       <Screens.NHCard
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHCheckbox =>
                       <Screens.NHCheckbox
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHFab =>
                       <Screens.NHFab
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHForm =>
                       <Screens.NHForm
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHIcon =>
                       <Screens.NHIcon
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHLayout =>
                       <Screens.NHLayout
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHList =>
                       <Screens.NHList
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.ListSwipe =>
                       <Screens.ListSwipe
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHPicker =>
                       <Screens.NHPicker
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHRadio =>
                       <Screens.NHRadio
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHSearchbar =>
                       <Screens.NHSearchbar
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.Segment =>
                       <Screens.Segment
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHSpinner =>
                       <Screens.NHSpinner
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHTab =>
                       <Screens.NHTab
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHThumbnail =>
                       <Screens.NHThumbnail
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHToast =>
                       <Screens.NHToast
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     | Route.NHTypography =>
                       <Screens.NHTypography
                         navigation
                         toggleDrawer=(() => self.send(ToggleDrawer))
                       />
                     }
                   )
                 </BsNativeBase.Drawer>
             )
        </StackNavigator>
      </BsNativeBase.StyleProvider>,
  };
};

let app = () => <Main />;

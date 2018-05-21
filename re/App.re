open Navigation;

module Main = {
  let component = ReasonReact.statelessComponent("App");
  let make = _children => {
    ...component,
    render: _self =>
      <StackNavigator initialState=[|Config.Welcome|]>
        ...(
             (~currentRoute, ~navigation) =>
               switch currentRoute {
               | Config.Welcome => <Welcome navigation />
               | Config.HeaderScreen => <HeaderScreen navigation />
               }
           )
      </StackNavigator>
  };
};

let app = () => <Main />;

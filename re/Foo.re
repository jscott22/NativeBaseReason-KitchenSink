open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("Foo");

let make = (~headerProps, _) => {
  ...component,
  render: _self => ReasonReact.null,
};

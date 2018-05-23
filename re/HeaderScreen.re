open BsReactNative;
open Navigation;

let component = ReasonReact.statelessComponent("Header");
let make = (~navigation, ~toggleDrawer, _children) => {
...component,
render: _self =>
<StackNavigator.Screen navigation headerTitle="Header" headerLeft={(_headerProps: Header.props) => <View><Text>{ReasonReact.string("Left")}</Text></View>}>
...(
  () => 

      <View>
        <Text>{ReasonReact.string("LOADING!!!")}</Text>
      </View>
    )
</StackNavigator.Screen>
};

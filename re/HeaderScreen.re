open BsReactNative;
open Navigation;

let component = ReasonReact.statelessComponent("Header");
let make = (~navigation, _children) => {
...component,
render: _self =>
<StackNavigator.Screen navigation headerTitle="Header">
...(
  () => 

      <View>
        <Text>{ReasonReact.string("LOADING!!!")}</Text>
      </View>
    )
</StackNavigator.Screen>
};

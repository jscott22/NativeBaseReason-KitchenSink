open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("ListSwipe");

let make = (~navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerTitle="ListSwipe"
      headerLeft=(
        (_headerProps: Header.props) =>
          <BsNativeBase.Button transparent=true onPress=toggleDrawer>
            <BsNativeBase.Icon iconType=Ionicons name="ios-menu" />
          </BsNativeBase.Button>
      )>
      ...(
           () =>
             <View> <Text> (ReasonReact.string("ListSwipe")) </Text> </View>
         )
    </StackNavigator.Screen>,
};

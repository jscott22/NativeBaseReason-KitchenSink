open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("Header");

let make = (~navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerTitle="Header"
      headerLeft=(
        _headerProps =>
        BsNativeBase.(
          <Button transparent=true onPress=toggleDrawer>
            <Icon iconType=Ionicons name="ios-menu" />
          </Button>
        )
      )>
      ...(
           () =>
           <View> <Text> (ReasonReact.string("Anatomy")) </Text> </View>
         )
    </StackNavigator.Screen>,
};

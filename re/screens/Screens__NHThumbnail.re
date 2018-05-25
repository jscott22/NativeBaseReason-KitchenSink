open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("NHThumbnail");

let make = (~navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerTitle="NHThumbnail"
      headerLeft=(
        (_headerProps: Header.props) =>
          <BsNativeBase.Button transparent=true onPress=toggleDrawer>
            <BsNativeBase.Icon iconType=Ionicons name="ios-menu" />
          </BsNativeBase.Button>
      )>
      ...(
           () =>
             <View> <Text> (ReasonReact.string("NHThumbnail")) </Text> </View>
         )
    </StackNavigator.Screen>,
};

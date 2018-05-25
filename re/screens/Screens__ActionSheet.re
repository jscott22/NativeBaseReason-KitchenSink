open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("ActionSheet");

let make = (~navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerTitle="ActionSheet"
      headerLeft=(
        (_headerProps: Header.props) =>
          <BsNativeBase.Button transparent=true onPress=toggleDrawer>
            <BsNativeBase.Icon iconType=Ionicons name="ios-menu" />
          </BsNativeBase.Button>
      )>
      ...(
           () =>
             <View> <Text> (ReasonReact.string("ActionSheet")) </Text> </View>
         )
    </StackNavigator.Screen>,
};

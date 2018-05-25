open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("NHDeckSwiper");

let make = (~navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerTitle="NHDeckSwiper"
      headerLeft=(
        (_headerProps: Header.props) =>
          <BsNativeBase.Button transparent=true onPress=toggleDrawer>
            <BsNativeBase.Icon iconType=Ionicons name="ios-menu" />
          </BsNativeBase.Button>
      )>
      ...(
           () =>
             <View>
               <Text> (ReasonReact.string("NHDeckSwiper")) </Text>
             </View>
         )
    </StackNavigator.Screen>,
};

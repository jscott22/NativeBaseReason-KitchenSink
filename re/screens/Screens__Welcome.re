open BsReactNative;

open Navigation;

let styles =
  StyleSheet.create(
    Style.(
      {
        "imageContainer": style([flex(1.)]),
        "logoContainer": style([flex(1.), marginTop(Pt(20.))]),
        "logo":
          style([
            width(Pt(280.)),
            height(Pt(100.)),
            position(Absolute),
            left(Pt(40.)),
            top(Pt(35.)),
          ]),
      }
    ),
  );

let component = ReasonReact.statelessComponent("Welcome");

let make = (~navigation: StackNavigator.navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerLeft=(
        (_headerProps: Header.props) =>
          <BsNativeBase.Button transparent=true onPress=toggleDrawer>
            <BsNativeBase.Icon iconType=Ionicons name="ios-menu" />
          </BsNativeBase.Button>
      )>
      ...(
           () =>
             BsNativeBase.(
               <StyleProvider>
                 <Container style=styles##imageContainer>
                   <StatusBar barStyle=`lightContent />
                   <ImageBackground
                     style=styles##imageContainer
                     source=(
                       Required(
                         Packager.require(
                           "../../../assets/launchscreen-bg.png",
                         ),
                       )
                     )
                   />
                   <View style=styles##logoContainer>
                     <Image
                       style=styles##logo
                       source=(
                         Required(
                           Packager.require(
                             "../../../assets/logo-kitchen-sink.png",
                           ),
                         )
                       )
                     />
                   </View>
                 </Container>
               </StyleProvider>
             )
         )
    </StackNavigator.Screen>,
};

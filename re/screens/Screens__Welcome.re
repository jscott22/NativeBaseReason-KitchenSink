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
        "text":
          style([
            color(String("#D8D8D8")),
            bottom(Pt(6.)),
            marginTop(Pt(5.)),
          ]),
        "spacer": style([marginTop(Pt(8.))]),
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
               <Container style=styles##imageContainer>
                 <StatusBar barStyle=`lightContent />
                 <ImageBackground
                   style=styles##imageContainer
                   source=(
                     Required(
                       Packager.require(
                         "../../../../assets/launchscreen-bg.png",
                       ),
                     )
                   )>
                   <View style=styles##logoContainer>
                     <ImageBackground
                       style=styles##logo
                       source=(
                         Required(
                           Packager.require(
                             "../../../../assets/logo-kitchen-sink.png",
                           ),
                         )
                       )
                     />
                   </View>
                   <View
                     style=Style.(
                             style([
                               alignItems(Center),
                               marginBottom(Pt(50.)),
                               backgroundColor(String("transparent")),
                             ])
                           )>
                     <H3 style=styles##text>
                       (ReasonReact.string("App to showcase"))
                     </H3>
                     <View style=styles##spacer />
                     <H3 style=styles##text>
                       (ReasonReact.string("NativeBase components"))
                     </H3>
                     <View style=styles##spacer />
                   </View>
                   <View style=Style.(style([marginBottom(Pt(80.))]))>
                     <Button
                       style=Style.(
                               style([
                                 backgroundColor(String("#6FAF98")),
                                 alignSelf(Center),
                               ])
                             )
                       onPress=(() => toggleDrawer())>
                       <Text> (ReasonReact.string("Let's Go!")) </Text>
                     </Button>
                   </View>
                 </ImageBackground>
               </Container>
             )
         )
    </StackNavigator.Screen>,
};

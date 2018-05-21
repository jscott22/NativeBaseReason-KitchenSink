open BsReactNative;
open Navigation;
open BsNativeBase;

type state = {
  ready: bool,
};

type action =
  | SetReady;


  let styles = StyleSheet.create(Style.({
    "imageContainer": style([flex(1.)]),
    "logoContainer": style([flex(1.), marginTop(Pt(20.)) ]),
    "logo": style([width(Pt(280.)), height(Pt(100.)), position(Absolute), left(Pt(40.)), top(Pt(35.))]),
  }));

let component = ReasonReact.reducerComponent("Welcome");

/* let fontsPromise = BsExpo.Font.loadAll([
  ("Roboto",  Packager.require("native-base/Fonts/Roboto.ttf")),
  ("Roboto_medium",  Packager.require("native-base/Fonts/Roboto_medium.ttf")),
  ("Ionicons", Packager.require("@expo/vector-icons/fonts/Ionicons.ttf")),
]); */


let make = (~navigation: StackNavigator.navigation, _children) => {
  ...component,
  initialState: () => {ready: true},
  reducer: (action, _state) =>
    switch(action) {
    | SetReady => ReasonReact.Update({ready: true})
    },
  render: self => {
    <StackNavigator.Screen navigation headerTitle="Welcome">
    ...(
      () => 
        if(self.state.ready) {
          <StyleProvider>
          <Container style=styles##imageContainer>
              <StatusBar barStyle=`lightContent />
              <ImageBackground style=styles##imageContainer source=Required(Packager.require("../../../assets/launchscreen-bg.png")) />
              <View style=styles##logoContainer>
                <Image style=styles##logo source=Required(Packager.require("../../../assets/logo-kitchen-sink.png")) />
              </View>
          </Container>
        </StyleProvider>
        } else {
          <View>
            <Text>{ReasonReact.string("LOADING!!!")}</Text>
          </View>
        })
    </StackNavigator.Screen>
  }
};

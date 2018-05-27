open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("ButtonDefault");

let make = (~navigation: StackNavigator.navigation, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen
      navigation
      headerLeft=(
        (_headerProps: Header.props) =>
          <BsNativeBase.Button
            transparent=true onPress=(() => navigation.pop())>
            <BsNativeBase.Icon iconType=Ionicons name="arrow-back" />
          </BsNativeBase.Button>
      )>
      ...(
           () =>
             BsNativeBase.(
               <Container>
                 <Content padder=true>
                   <Text> (ReasonReact.string("Default Button!")) </Text>
                 </Content>
               </Container>
             )
         )
    </StackNavigator.Screen>,
};

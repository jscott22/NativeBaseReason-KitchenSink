open BsReactNative;

open Navigation;

open BsNativeBase;

module Button = BsNativeBase.Button;

let component = ReasonReact.statelessComponent("ButtonOutline");

let make = (~navigation: StackNavigator.navigation, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen navigation>
      ...(
           () =>
             <Container
               style=Style.(style([backgroundColor(String("#FFF"))]))>
               <Header>
                 <Left>
                   <Button transparent=true onPress=(() => navigation.pop())>
                     <Icon name="arrow-back" />
                   </Button>
                 </Left>
                 <Body>
                   <Title> (ReasonReact.string("Default")) </Title>
                 </Body>
                 <Right />
               </Header>
               <Content
                 padder=true
                 style=Style.(
                         style([
                           backgroundColor(String("#fff")),
                           padding(Pt(20.)),
                         ])
                       )>
                 <Button
                   bordered=true light=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Light")) </Text>
                 </Button>
                 <Button bordered=true info=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Info")) </Text>
                 </Button>
                 <Button
                   bordered=true primary=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Primary")) </Text>
                 </Button>
                 <Button
                   bordered=true success=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Success")) </Text>
                 </Button>
                 <Button
                   bordered=true warning=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Warning")) </Text>
                 </Button>
                 <Button
                   bordered=true danger=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Danger")) </Text>
                 </Button>
                 <Button bordered=true dark=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Dark")) </Text>
                 </Button>
               </Content>
             </Container>
         )
    </StackNavigator.Screen>,
};

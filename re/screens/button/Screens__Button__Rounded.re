open BsReactNative;

open Navigation;

open BsNativeBase;

module Button = BsNativeBase.Button;

let component = ReasonReact.statelessComponent("ButtonRounded");

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
                 <Button rounded=true light=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Light")) </Text>
                 </Button>
                 <Button rounded=true info=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Info")) </Text>
                 </Button>
                 <Button
                   rounded=true primary=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Primary")) </Text>
                 </Button>
                 <Button
                   rounded=true success=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Success")) </Text>
                 </Button>
                 <Button
                   rounded=true warning=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Warning")) </Text>
                 </Button>
                 <Button
                   rounded=true danger=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Danger")) </Text>
                 </Button>
                 <Button rounded=true dark=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Dark")) </Text>
                 </Button>
               </Content>
             </Container>
         )
    </StackNavigator.Screen>,
};

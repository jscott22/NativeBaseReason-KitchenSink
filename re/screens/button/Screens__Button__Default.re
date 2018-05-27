open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("ButtonDefault");

let make = (~navigation: StackNavigator.navigation, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen navigation>
      ...(
           () =>
             BsNativeBase.(
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
                   <Button light=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Light")) </Text>
                   </Button>
                   <Button info=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Info")) </Text>
                   </Button>
                   <Button primary=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Primary")) </Text>
                   </Button>
                   <Button success=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Success")) </Text>
                   </Button>
                   <Button warning=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Warning")) </Text>
                   </Button>
                   <Button danger=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Danger")) </Text>
                   </Button>
                   <Button dark=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Dark")) </Text>
                   </Button>
                 </Content>
               </Container>
             )
         )
    </StackNavigator.Screen>,
};

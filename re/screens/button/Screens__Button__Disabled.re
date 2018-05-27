open BsReactNative;

open Navigation;

open BsNativeBase;

module Button = BsNativeBase.Button;

let component = ReasonReact.statelessComponent("ButtonDisabled");

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
                   <Title> (ReasonReact.string("Disabled")) </Title>
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
                 <Button disabled=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Default")) </Text>
                 </Button>
                 <Button
                   disabled=true bordered=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Outline")) </Text>
                 </Button>
                 <Button
                   disabled=true rounded=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Rounded")) </Text>
                 </Button>
                 <Button
                   disabled=true large=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Custom")) </Text>
                 </Button>
                 <Button
                   disabled=true iconRight=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Icon Button")) </Text>
                   <Icon name="home" />
                 </Button>
                 <Button
                   disabled=true block=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Block")) </Text>
                 </Button>
                 <Button disabled=true full=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Full")) </Text>
                 </Button>
               </Content>
             </Container>
         )
    </StackNavigator.Screen>,
};

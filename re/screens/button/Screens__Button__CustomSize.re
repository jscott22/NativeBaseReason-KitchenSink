open BsReactNative;

open Navigation;

open BsNativeBase;

module Button = BsNativeBase.Button;

let component = ReasonReact.statelessComponent("ButtonCustomSize");

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
                   <Title> (ReasonReact.string("Custom Size")) </Title>
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
                 <Button small=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Default Small")) </Text>
                 </Button>
                 <Button success=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Success Default")) </Text>
                 </Button>
                 <Button large=true dark=true style=GlobalStyle.style##mb15>
                   <Text> (ReasonReact.string("Dark Large")) </Text>
                 </Button>
               </Content>
             </Container>
         )
    </StackNavigator.Screen>,
};

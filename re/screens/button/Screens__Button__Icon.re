open BsReactNative;

open Navigation;

open BsNativeBase;

module Button = BsNativeBase.Button;

let styles =
  StyleSheet.create(
    Style.(
      {
        "spacedButton":
          style([marginBottom(Pt(20.)), marginLeft(Pt(10.))]),
      }
    ),
  );

let component = ReasonReact.statelessComponent("ButtonTransparent");

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
                 <Body> <Title> (ReasonReact.string("Icon")) </Title> </Body>
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
                 <View
                   style=Style.(
                           style([
                             flexDirection(Row),
                             justifyContent(SpaceBetween),
                           ])
                         )>
                   <Button
                     iconLeft=true light=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="arrow-back" />
                     <Text> (ReasonReact.string("Back")) </Text>
                   </Button>
                   <Button
                     iconRight=true light=true style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Next")) </Text>
                     <Icon active=true name="arrow-forward" />
                   </Button>
                   <Button light=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="arrow-down" />
                   </Button>
                   <Button light=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="arrow-up" />
                   </Button>
                 </View>
                 <View style=Style.(style([flexDirection(Row)]))>
                   <Button iconLeft=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="home" />
                     <Text> (ReasonReact.string("Home")) </Text>
                   </Button>
                   <Button
                     iconLeft=true bordered=true style=styles##spacedButton>
                     <Icon active=true name="briefcase" />
                     <Text> (ReasonReact.string("Work")) </Text>
                   </Button>
                   <Button
                     transparent=true
                     success=true
                     style=GlobalStyle.style##mb15>
                     <Text> (ReasonReact.string("Success")) </Text>
                   </Button>
                 </View>
                 <View style=Style.(style([flexDirection(Row)]))>
                   <Button
                     iconLeft=true danger=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="close" />
                     <Text> (ReasonReact.string("Trash")) </Text>
                   </Button>
                   <Button
                     danger=true bordered=true style=styles##spacedButton>
                     <Icon active=true name="trash" />
                   </Button>
                   <Button
                     danger=true transparent=true style=styles##spacedButton>
                     <Icon active=true name="trash" />
                   </Button>
                 </View>
                 <View style=Style.(style([flexDirection(Row)]))>
                   <Button
                     iconLeft=true warning=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="warning" />
                     <Text> (ReasonReact.string("Don't")) </Text>
                   </Button>
                   <Button
                     warning=true bordered=true style=styles##spacedButton>
                     <Icon active=true name="warning" />
                   </Button>
                 </View>
                 <View style=Style.(style([flexDirection(Row)]))>
                   <Button
                     iconLeft=true info=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="alert" />
                     <Text> (ReasonReact.string("Help")) </Text>
                   </Button>
                   <Button info=true style=styles##spacedButton>
                     <Icon active=true name="alert" />
                   </Button>
                 </View>
                 <View style=Style.(style([flexDirection(Row)]))>
                   <Button
                     iconLeft=true dark=true style=GlobalStyle.style##mb15>
                     <Icon active=true name="cog" />
                     <Text> (ReasonReact.string("Settings")) </Text>
                   </Button>
                   <Button
                     dark=true transparent=true style=styles##spacedButton>
                     <Icon active=true name="cog" />
                   </Button>
                 </View>
                 <Button
                   iconLeft=true
                   transparent=true
                   style=GlobalStyle.style##mb15>
                   <Icon active=true name="beer" />
                   <Text> (ReasonReact.string("Pub")) </Text>
                 </Button>
               </Content>
             </Container>
         )
    </StackNavigator.Screen>,
};

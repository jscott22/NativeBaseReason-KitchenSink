open Navigation;

let component = ReasonReact.statelessComponent("Anatomy");

let make = (~navigation, ~toggleDrawer, _children) => {
  ...component,
  render: _self =>
    <StackNavigator.Screen navigation>
      ...(
           () =>
             BsNativeBase.(
               <Container>
                 <Content padder=true>
                   <Text> (ReasonReact.string("Content goes here!!")) </Text>
                 </Content>
                 <Footer>
                   <FooterTab>
                     <Button active=true full=true>
                       <Text> (ReasonReact.string("Footer!!!")) </Text>
                     </Button>
                   </FooterTab>
                 </Footer>
               </Container>
             )
         )
    </StackNavigator.Screen>,
};

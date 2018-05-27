open BsReactNative;

open Navigation;

type route = {
  route: Route.route,
  text: string,
};

let routeData = [|
  {route: Route.ButtonDefault, text: "Default Button"},
  {route: Route.ButtonOutline, text: "Outline Button"},
  {route: Route.ButtonRounded, text: "Rounded Button"},
  {route: Route.ButtonBlock, text: "Block Button"},
  {route: Route.ButtonFull, text: "Full Button"},
  {route: Route.ButtonCustomSize, text: "Custom Size Button"},
  {route: Route.ButtonTransparent, text: "Transparent Button"},
  {route: Route.ButtonIcon, text: "Icon Button"},
  {route: Route.ButtonDisabled, text: "Disabled Button"},
|];

let component = ReasonReact.statelessComponent("ButtonLanding");

let make = (~navigation: StackNavigator.navigation, ~toggleDrawer, _children) => {
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
                     <Button transparent=true onPress=(() => toggleDrawer())>
                       <Icon name="menu" />
                     </Button>
                   </Left>
                   <Body>
                     <Title> (ReasonReact.string("Buttons")) </Title>
                   </Body>
                   <Right />
                 </Header>
                 <Content>
                   <ListView
                     dataArray=routeData
                     renderRow=(
                       data =>
                         <ListItem
                           button=true
                           onPress=(() => navigation.push(data.route))>
                           <Left>
                             <Text> (ReasonReact.string(data.text)) </Text>
                           </Left>
                           <Right>
                             <Icon
                               name="arrow-forward"
                               style=Style.(style([color(String("#999"))]))
                             />
                           </Right>
                         </ListItem>
                     )
                   />
                 </Content>
               </Container>
             )
         )
    </StackNavigator.Screen>,
};

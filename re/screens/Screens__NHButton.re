open BsReactNative;

open Navigation;

type route = {
  route: Route.route,
  text: string,
};

let routeData = [|{route: Route.ButtonDefault, text: "Default Button"}|];

let component = ReasonReact.statelessComponent("NHButton");

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

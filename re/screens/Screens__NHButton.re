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
    <StackNavigator.Screen
      navigation
      headerTitle="NHButton"
      headerLeft=(
        (_headerProps: Header.props) =>
          BsNativeBase.(
            <Button transparent=true onPress=toggleDrawer>
              <Icon iconType=Ionicons name="ios-menu" />
            </Button>
          )
      )>
      ...(
           () =>
             BsNativeBase.(
               <Content>
                 <ListView
                   dataArray=routeData
                   renderRow=(
                     data =>
                       <ListItem
                         button=true
                         onPress=(() => {
                           navigation.push(data.route);
                         })>
                         <Left>
                           <Text> (ReasonReact.string(data.text)) </Text>
                         </Left>
                       </ListItem>
                   )
                 />
               </Content>
             )
         )
    </StackNavigator.Screen>,
};

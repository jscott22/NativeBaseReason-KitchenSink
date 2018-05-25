open BsReactNative;

open Navigation;

let component = ReasonReact.statelessComponent("Sidebar");

let styles =
  StyleSheet.create(
    Style.(
      {
        "drawer": style([flex(1.), backgroundColor(String("white"))]),
        "icon":
          style([
            color(String("#777")),
            fontSize(Float(26.)),
            width(Pt(30.)),
          ]),
        "badgeText":
          style([
            fontSize(
              Platform.equals(Platform.Android) ? Float(11.) : Float(13.),
            ),
            fontWeight(`_400),
            textAlign(Center),
            marginTop(
              Platform.equals(Platform.Android) ? Pt(-3.) : Pt(0.),
            ),
            color(String("#fff")),
          ]),
        "text":
          style([
            fontWeight(Platform.equals(Platform.Android) ? `_400 : `_500),
            fontSize(Float(16.)),
            marginLeft(Pt(20.)),
          ]),
      }
    ),
  );

type route = {
  name: string,
  route: Route.route,
  icon: string,
  bg: string,
  types: option(string),
};

let dataArray = [|
  {
    name: "Anatomy",
    route: Route.Anatomy,
    icon: "phone-portrait",
    bg: "#C5F442",
    types: None,
  },
  {
    name: "Header",
    route: Route.Header,
    icon: "phone-portrait",
    bg: "#477EEA",
    types: None,
  },
  {
    name: "Footer",
    route: Route.Footer,
    icon: "phone-portrait",
    bg: "#DA4437",
    types: Some("4"),
  },
  {
    name: "Badge",
    route: Route.NHBadge,
    icon: "notifications",
    bg: "#4DCAE0",
    types: None,
  },
  {
    name: "Button",
    route: Route.NHButton,
    icon: "radio-button-off",
    bg: "#1EBC7C",
    types: Some("9"),
  },
  {
    name: "Card",
    route: Route.NHCard,
    icon: "keypad",
    bg: "#B89EF5",
    types: Some("8"),
  },
  {
    name: "Check Box",
    route: Route.NHCheckbox,
    icon: "checkmark-circle",
    bg: "#EB6B23",
    types: None,
  },
  {
    name: "Fab",
    route: Route.NHFab,
    icon: "help-buoy",
    bg: "#EF6092",
    types: Some("2"),
  },
  {
    name: "Form & Inputs",
    route: Route.NHForm,
    icon: "call",
    bg: "#EFB406",
    types: Some("12"),
  },
  {
    name: "Icon",
    route: Route.NHIcon,
    icon: "information-circle",
    bg: "#bfe9ea",
    types: Some("4"),
  },
  {
    name: "Layout",
    route: Route.NHLayout,
    icon: "grid",
    bg: "#9F897C",
    types: Some("5"),
  },
  {
    name: "List",
    route: Route.NHList,
    icon: "lock",
    bg: "#5DCEE2",
    types: Some("8"),
  },
  {
    name: "ListSwipe",
    route: Route.ListSwipe,
    icon: "swap",
    bg: "#C5F442",
    types: Some("3"),
  },
  {
    name: "Picker",
    route: Route.NHPicker,
    icon: "arrow-dropdown",
    bg: "#F50C75",
    types: None,
  },
  {
    name: "Radio",
    route: Route.NHRadio,
    icon: "radio-button-on",
    bg: "#6FEA90",
    types: None,
  },
  {
    name: "SearchBar",
    route: Route.NHSearchbar,
    icon: "search",
    bg: "#29783A2C6B",
    types: None,
  },
  {
    name: "Segment",
    route: Route.Segment,
    icon: "menu",
    bg: "#0A2C6B",
    types: Some("2"),
  },
  {
    name: "Spinner",
    route: Route.NHSpinner,
    icon: "navigate",
    bg: "#BE6F50",
    types: None,
  },
  {
    name: "Tabs",
    route: Route.NHTab,
    icon: "home",
    bg: "#AB6AED",
    types: Some("3"),
  },
  {
    name: "Thumbnail",
    route: Route.NHThumbnail,
    icon: "image",
    bg: "#cc0000",
    types: Some("2"),
  },
  {
    name: "Toast",
    route: Route.NHToast,
    icon: "albums",
    bg: "#C5F442",
    types: Some("6"),
  },
  {
    name: "Typography",
    route: Route.NHTypography,
    icon: "paper",
    bg: "#48525AB6AED",
    types: None,
  },
|];

let make = (~navigation: StackNavigator.navigation, ~hideDrawer, _children) => {
  ...component,
  render: _self =>
    BsNativeBase.(
      <Container>
        <Content style=styles##drawer>
          <ListView
            dataArray
            renderRow=(
              data =>
                <ListItem
                  button=true
                  noBorder=true
                  onPress=(
                    () => {
                      hideDrawer();
                      navigation.push(data.route);
                    }
                  )>
                  <Left>
                    <Icon
                      iconType=Ionicons
                      active=true
                      name=data.icon
                      style=styles##icon
                    />
                    <Text style=styles##text>
                      (ReasonReact.string(data.name))
                    </Text>
                  </Left>
                  (
                    switch (data.types) {
                    | Some(types) =>
                      <Right style=Style.(style([flex(1.)]))>
                        <Badge
                          style=Style.(
                                  style([
                                    borderRadius(3.),
                                    height(Pt(25.)),
                                    width(Pt(72.)),
                                    backgroundColor(String(data.bg)),
                                  ])
                                )>
                          <Text style=styles##badgeText>
                            (ReasonReact.string(types ++ " Types"))
                          </Text>
                        </Badge>
                      </Right>
                    | None => ReasonReact.null
                    }
                  )
                </ListItem>
            )
          />
        </Content>
      </Container>
    ),
};

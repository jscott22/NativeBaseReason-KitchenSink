open BsReactNative;

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
      }
    ),
  );

type route = {
  name: string,
  route: string,
  icon: string,
  bg: string,
  types: option(string),
};

let dataArray = [|
  {
    name: "Anatomy",
    route: "Anatomy",
    icon: "phone-portrait",
    bg: "#C5F442",
    types: None,
  },
  {
    name: "Actionsheet",
    route: "Actionsheet",
    icon: "easel",
    bg: "#C5F442",
    types: None,
  },
  {
    name: "Header",
    route: "Header",
    icon: "phone-portrait",
    bg: "#477EEA",
    types: None,
  },
  {
    name: "Footer",
    route: "Footer",
    icon: "phone-portrait",
    bg: "#DA4437",
    types: Some("4"),
  },
  {
    name: "Badge",
    route: "NHBadge",
    icon: "notifications",
    bg: "#4DCAE0",
    types: None,
  },
  {
    name: "Button",
    route: "NHButton",
    icon: "radio-button-off",
    bg: "#1EBC7C",
    types: Some("9"),
  },
  {
    name: "Card",
    route: "NHCard",
    icon: "keypad",
    bg: "#B89EF5",
    types: Some("8"),
  },
  {
    name: "Check Box",
    route: "NHCheckbox",
    icon: "checkmark-circle",
    bg: "#EB6B23",
    types: None,
  },
  {
    name: "Deck Swiper",
    route: "NHDeckSwiper",
    icon: "swap",
    bg: "#3591FA",
    types: Some("2"),
  },
  {
    name: "Fab",
    route: "NHFab",
    icon: "help-buoy",
    bg: "#EF6092",
    types: Some("2"),
  },
  {
    name: "Form & Inputs",
    route: "NHForm",
    icon: "call",
    bg: "#EFB406",
    types: Some("12"),
  },
  {
    name: "Icon",
    route: "NHIcon",
    icon: "information-circle",
    bg: "#bfe9ea",
    types: Some("4"),
  },
  {
    name: "Layout",
    route: "NHLayout",
    icon: "grid",
    bg: "#9F897C",
    types: Some("5"),
  },
  {
    name: "List",
    route: "NHList",
    icon: "lock",
    bg: "#5DCEE2",
    types: Some("8"),
  },
  {
    name: "ListSwipe",
    route: "ListSwipe",
    icon: "swap",
    bg: "#C5F442",
    types: Some("3"),
  },
  {
    name: "Picker",
    route: "NHPicker",
    icon: "arrow-dropdown",
    bg: "#F50C75",
    types: None,
  },
  {
    name: "Radio",
    route: "NHRadio",
    icon: "radio-button-on",
    bg: "#6FEA90",
    types: None,
  },
  {
    name: "SearchBar",
    route: "NHSearchbar",
    icon: "search",
    bg: "#29783A2C6B",
    types: None,
  },
  {
    name: "Segment",
    route: "Segment",
    icon: "menu",
    bg: "#0A2C6B",
    types: Some("2"),
  },
  {
    name: "Spinner",
    route: "NHSpinner",
    icon: "navigate",
    bg: "#BE6F50",
    types: None,
  },
  {
    name: "Tabs",
    route: "NHTab",
    icon: "home",
    bg: "#AB6AED",
    types: Some("3"),
  },
  {
    name: "Thumbnail",
    route: "NHThumbnail",
    icon: "image",
    bg: "#cc0000",
    types: Some("2"),
  },
  {
    name: "Toast",
    route: "NHToast",
    icon: "albums",
    bg: "#C5F442",
    types: Some("6"),
  },
  {
    name: "Typography",
    route: "NHTypography",
    icon: "paper",
    bg: "#48525AB6AED",
    types: None,
  },
|];

let make = _children => {
  ...component,
  render: _self =>
    BsNativeBase.(
      <Container>
        <Content style=styles##drawer>
          <ListView
            dataArray
            renderRow=(
              data =>
                <ListItem>
                  <Icon
                    iconType=Ionicons
                    active=true
                    name=data.icon
                    style=styles##icon
                  />
                  <Text> (ReasonReact.string(data.name)) </Text>
                </ListItem>
            )
          />
        </Content>
      </Container>
    ),
};

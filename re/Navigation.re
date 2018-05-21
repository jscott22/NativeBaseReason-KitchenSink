module Config = {
  type route =
    | Welcome
    | HeaderScreen;
};

include ReRoute.CreateNavigation(Config);

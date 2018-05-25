module Route = {
  type route =
    | Anatomy
    | Actionsheet
    | Header
    | Footer
    | NHBadge
    | NHButton
    | NHCard
    | NHCheckbox
    | NHDeckSwiper
    | NHFab
    | NHForm
    | NHIcon
    | NHLayout
    | NHList
    | ListSwipe
    | NHPicker
    | NHRadio
    | NHSearchbar
    | Segment
    | NHSpinner
    | NHTab
    | NHThumbnail
    | NHToast
    | NHTypography
    | Welcome;
};

include ReRoute.CreateNavigation(Route);

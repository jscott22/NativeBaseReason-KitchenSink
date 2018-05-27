module Route = {
  type route =
    | Anatomy
    | Header
    | Footer
    | NHBadge
    | NHButton
    | NHCard
    | NHCheckbox
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
    | Welcome
    | ButtonDefault;
};

include ReRoute.CreateNavigation(Route);

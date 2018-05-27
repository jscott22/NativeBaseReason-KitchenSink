module Route = {
  type route =
    | Anatomy
    | Header
    | Footer
    | NHBadge
    | Button
    | ButtonDefault
    | ButtonOutline
    | ButtonRounded
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
    | Welcome;
};

include ReRoute.CreateNavigation(Route);

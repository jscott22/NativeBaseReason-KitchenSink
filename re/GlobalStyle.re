open BsReactNative;

let style =
  StyleSheet.create(
    Style.(
      {
        "mt15": style([marginTop(Pt(15.))]),
        "mb15": style([marginBottom(Pt(15.))]),
        "mb20": style([marginBottom(Pt(20.))]),
      }
    ),
  );

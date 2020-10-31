open ReactNative;

[@react.component]
let make = (~href: string, ~style=?, ~value: string) => {
  let linkStyle =
    switch (style) {
    | None => Styles.styles##link
    | Some(style) => Style.array([|Styles.styles##link, style|])
    };
  <Text
    onPress={_e =>
      Js.Promise.(
        Linking.openURL(href)
        |> then_(_ => Js.log("opened " ++ href) |> resolve)
        |> ignore
      )
    }
    style=linkStyle
    value
  />;
};
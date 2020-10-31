open ReactNative;
let styles =
  StyleSheet.create(
    Style.{
      "container":
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`center,
          ~backgroundColor=Colors.colors.background,
          (),
        ),
      "label":
        style(
          ~fontSize=20.,
          ~alignItems=`center,
          ~textAlign=`center,
          ~margin=10.->dp,
          (),
        ),
      "input":
        style(
          ~borderColor=Colors.colors.commonBorderColor,
          ~borderWidth=1.,
          ~width=Metrics.metrics.screenWidth->dp,
          ~height=45.->dp,
          (),
        ),
      "fancyButton":
        array([|
          Buttons.commonButton,
          style(
            ~backgroundColor=Colors.colors.buttonColor,
            ~borderColor=Colors.colors.commonBorderColor,
            (),
          ),
        |]),
      "loginButton":
        array([|
          Buttons.commonButton,
          style(~backgroundColor="grey", ~borderColor="lightblue", ()),
        |]),
    },
  );
// let code = ReactDOMRe.Style.make(~fontFamily="monospace", ());
// let styles =
//   StyleSheet.create(
//     Style.{
//       "app": style([marginHorizontal(Auto), maxWidth(Pt(500.))]),
//       "logo": style([height(Pt(80.))]),
//       "header": style([padding(Pt(20.))]),
//       "title":
//         style([
//           fontWeight(`Bold),
//           fontSize(Float(24.)),
//           marginVertical(Pt(16.)),
//           textAlign(Center),
//         ]),
//       "text":
//         style([
//           lineHeight(24.),
//           fontSize(Float(18.)),
//           marginVertical(Pt(16.)),
//           textAlign(Center),
//         ]),
//       "link": style([color(String("#1B95E0"))]),
//       "code": style([fontFamily("monospace")]),
//     },
//   );

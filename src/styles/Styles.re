open ReactNative;
let styles =
  StyleSheet.create(
    Style.{
      "app":
        style(
          ~maxWidth=500.->dp,
          ~marginHorizontal=auto,
          (),
        ),
      "logo":
        style(
          ~height=80.->dp,
          (),
        ),
      "header":
        style(
          ~padding=20.->dp,
          (),
        ),
      "text":
        style(
          ~lineHeight=24.,
          ~fontSize=18.,
          ~marginVertical=16.->dp,
          ~textAlign=`center,
          (),
        ),
      "title":
        style(
          ~fontWeight=`bold,
          ~fontSize=24.,
          ~marginVertical=16.->dp,
          ~textAlign=`center,
          (),
        ),
      "link":
        style(
          ~color="#1B95E0",
          (),
        ),
      "code":
        style(
          ~fontFamily="monospace",
          (),
        ),
        "container":
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`center,
          ~backgroundColor="#F5FCFF",
          (),
        ),
      "welcome":
        style(~fontSize=20., ~textAlign=`center, ~margin=10.->dp, ()),
      "instructions":
        style(~textAlign=`center, ~color="#333333", ~marginBottom=5.->dp, ()),
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

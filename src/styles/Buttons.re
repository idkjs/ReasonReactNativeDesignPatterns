let%private width = ReactNative.Dimensions.get(`window).width;

// type commonButton = {
//   width: float,
//   marginTop: float,
//   borderBottomRightRadius: float,
//   borderWidth: float,
//   borderBottomLeftRadius: float,
// };

// type buttons = {commonButton};

// let buttons = {
//   commonButton: {
//     width,
//     marginTop: 10.,
//     borderBottomRightRadius: 4.,
//     borderWidth: 1.,
//     borderBottomLeftRadius: 4.,
//   },
// };
open ReactNative.Style;
let commonButton: ReactNative.Style.t =
  style(
    ~width=width->dp,
    ~marginTop=10.->dp,
    ~borderBottomRightRadius=4.,
    ~borderWidth=1.,
    ~borderBottomLeftRadius=4.,
    (),
  );

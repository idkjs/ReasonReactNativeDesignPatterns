// open ReactNative;
// let (width, height,_,_ ) = Dimensions.get(`window);
// let (width, height,_,_) = displayMetrics;
let%private width = ReactNative.Dimensions.get(`window).width;
let%private height = ReactNative.Dimensions.get(`window).height;

type metrics = {
  screenWidth: float,
  screenHeight: float,
};

let metrics = {
  screenWidth: width < height ? width : height,
  screenHeight: width < height ? height : width,
};

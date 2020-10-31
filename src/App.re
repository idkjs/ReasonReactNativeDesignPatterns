open ReactNative;
open Utils;
open Styles;

[@react.component]
let make = () =>
      <View style=styles##app>
        <View style=styles##header>
          <Image
            accessibilityLabel="React logo"
            source=Image.Source.fromRequired(Packager.require("./assets/logoUri.svg"))
            resizeMode=`contain
            style=styles##logo
          />
          <Text style=styles##title> {"React Native for Web"->s} </Text>
        </View>
        <Text style=styles##text>
          "This is an example of an app built with "->s
          <Link href="https://github.com/facebook/create-react-app"
            value="Create React App" />
          " and "->s
          <Link href="https://github.com/necolas/react-native-web" value=
            "React Native for Web"/>
        </Text>
        <Text style=styles##text>
          "To get started, edit "->s
          <Link style=styles##code href="https://codesandbox.io/s/q4qymyp2l6/"
            value="src/App.js" />
          ". "->s
        </Text>
        <Button onPress={_e => Js.log("Example button pressed")} title="Example button" />
      </View>;
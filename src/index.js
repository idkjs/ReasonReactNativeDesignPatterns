import { AppRegistry } from "react-native";
import {make as App} from "./ContainerComponentPattern/ContainerComponentPattern.bs";
// import {make as App} from "./App.bs";

AppRegistry.registerComponent("App", () => App);

AppRegistry.runApplication("App", {
  rootTag: document.getElementById("root")
});

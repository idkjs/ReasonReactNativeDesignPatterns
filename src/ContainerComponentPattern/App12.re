open ReactNative;
let%private width = ReactNative.Dimensions.get(`window).width->Style.dp;

let styles =
  StyleSheet.create(
    Style.{
      "container":
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`flexStart,
          ~backgroundColor="#F5FCFF",
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
          ~borderColor="gray",
          ~borderWidth=1.,
          ~width,
          ~height=45.->dp,
          (),
        ),
      "fancyButton":
    
          style(
            ~marginTop=10.->dp,
            ~backgroundColor="lightblue",
            ~borderBottomRightRadius=4.,
            ~width,
            ~borderWidth=1.,
            ~borderColor="gray",
            (),
          ),
    },
  );

[@react.component]
let make = () => {
  let (isCurrentUser, _) = React.useState(() => false);
  let (user, setUser) = React.useState(() => "");
  let (password, setPassword) = React.useState(() => "");
  let (email, setEmail) = React.useState(() => "");

  <View style={styles##container}>
    <Text style={styles##label}> "username"->React.string </Text>
    <TextInput
      style={styles##input}
      value=user
      onChangeText={user => setUser(_ => user)}
    />
    <Text style={styles##label}> "password"->React.string </Text>
    <TextInput
      style={styles##input}
      onChangeText={password => setPassword(_ => password)}
      value=password
    />
    {isCurrentUser
       ? <TouchableOpacity style={styles##fancyButton}>
           <Text style={styles##label}> "Log in"->React.string </Text>
         </TouchableOpacity>
       : <React.Fragment>
           <Text style={styles##label}> "email"->React.string </Text>
           <TextInput
             style={styles##input}
             onChangeText={email => setEmail(_ => email)}
             value=email
           />
           <TouchableOpacity style={styles##fancyButton}>
             <Text style={styles##label}> "Sign up"->React.string </Text>
           </TouchableOpacity>
         </React.Fragment>}
  </View>;
};

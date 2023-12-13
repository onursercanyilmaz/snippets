import * as React from "react";
import { Button, Text, View } from "react-native";
import { useDispatch } from "react-redux";

interface ProfilePAgeProps {
  navigation: any;
}

export default function ProfilePage(props: ProfilePAgeProps) {
  const dispatch = useDispatch();
  return (
    <View style={{ flex: 1, justifyContent: "center", alignItems: "center" }}>
      <Text>Profile screen</Text>
      <Button
        title="Go to User Detail"
        onPress={() => props.navigation.navigate("UserDetail")}
      />
      <Button title="Logout" onPress={() => dispatch({ type: "logout" })} />
    </View>
  );
}

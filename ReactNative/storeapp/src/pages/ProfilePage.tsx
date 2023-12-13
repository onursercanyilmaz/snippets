import * as React from "react";
import { Alert, Button, Text, View } from "react-native";
import { useDispatch, useSelector } from "react-redux";
import { logout } from "../context/AuthProvider/authSlicer";

interface ProfilePAgeProps {
  navigation: any;
}

export default function ProfilePage(props: ProfilePAgeProps) {
  const { isAuthenticated, user } = useSelector((state: any) => state.auth);

  const dispatch = useDispatch();
  return (
    <View style={{ flex: 1, justifyContent: "center", alignItems: "center" }}>
      <Text>Profile screen</Text>
      <Button
        title="Go to User Detail"
        onPress={() => props.navigation.navigate("UserDetail")}
      />
      <Button title="Logout" onPress={() => dispatch(logout())} />
      <Text style={{ color: "red" }}>{user.token}</Text>
    </View>
  );
}

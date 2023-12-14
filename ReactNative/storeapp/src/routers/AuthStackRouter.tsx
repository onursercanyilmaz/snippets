import * as React from 'react';
import { createNativeStackNavigator } from '@react-navigation/native-stack';
import LoginPage from '../pages/LoginPage/LoginPage';
const AuthStack = createNativeStackNavigator();

export default function AuthStackRouter() {
  return (
    <AuthStack.Navigator
      initialRouteName="Login"
      screenOptions={{
        headerShown: false,
      }}>
      <AuthStack.Screen name="Login" component={LoginPage} />
      <AuthStack.Screen name="SignUp" component={LoginPage} />
    </AuthStack.Navigator>
  );
}

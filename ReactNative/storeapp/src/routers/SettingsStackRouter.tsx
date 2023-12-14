import * as React from 'react';
import { createNativeStackNavigator } from '@react-navigation/native-stack';
import ProfilePage from '../pages/ProfilePage';
import UserDetailPage from '../pages/UserDetailPage';

const SettingsStack = createNativeStackNavigator();

export default function SettingsStackScreen() {
  return (
    <SettingsStack.Navigator>
      <SettingsStack.Screen name="Profile" component={ProfilePage} />
      <SettingsStack.Screen name="UserDetail" component={UserDetailPage} />
    </SettingsStack.Navigator>
  );
}

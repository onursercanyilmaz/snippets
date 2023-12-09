import {View, Text, Settings} from 'react-native';
import React from 'react';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import {NavigationContainer} from '@react-navigation/native';
import HomeStackRouter from './src/routers/HomeStackRouter';
import SettingsStackRouter from './src/routers/SettingsStackRouter';
const Tab = createBottomTabNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Tab.Navigator screenOptions={{headerShown: false}}>
        <Tab.Screen name="Home" component={HomeStackRouter} />
        <Tab.Screen name="Settings" component={SettingsStackRouter} />
      </Tab.Navigator>
    </NavigationContainer>
  );
}

import {View, Text, Settings, Dimensions} from 'react-native';
import React from 'react';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import {NavigationContainer} from '@react-navigation/native';
import HomeStackRouter from './src/routers/HomeStackRouter';
import SettingsStackRouter from './src/routers/SettingsStackRouter';
import LoginPage from './src/pages/LoginPage/LoginPage';
import Icon from 'react-native-vector-icons/FontAwesome';
const Tab = createBottomTabNavigator();

export default function App() {
  const hexToRgba = (hex: string, alpha: any) => {
    const r = parseInt(hex.slice(1, 3), 16);
    const g = parseInt(hex.slice(3, 5), 16);
    const b = parseInt(hex.slice(5, 7), 16);
    return `rgba(${r}, ${g}, ${b}, ${alpha})`;
  };
  return (
    <NavigationContainer>
      <Tab.Navigator
        screenOptions={{
          headerShown: false,
          tabBarShowLabel: false,
          tabBarStyle: {
            backgroundColor: '#be2945',
            borderTopWidth: 0,
            elevation: 0,
            height: Dimensions.get('window').height / 14,
          },
        }}>
        <Tab.Screen
          name="Login"
          component={LoginPage}
          options={{
            tabBarIcon: ({color, size, focused}) => (
              <Icon
                name="user"
                size={size}
                color={focused ? 'white' : hexToRgba('000000', 0.2)}
              />
            ),
          }}
        />
        <Tab.Screen
          name="Home"
          component={HomeStackRouter}
          options={{
            tabBarIcon: ({color, size, focused}) => (
              <Icon
                name="home"
                size={size}
                color={focused ? 'white' : hexToRgba('000000', 0.2)}
              />
            ),
          }}
        />
        <Tab.Screen
          name="Settings"
          component={SettingsStackRouter}
          options={{
            tabBarIcon: ({color, size, focused}) => (
              <Icon
                name="rocket"
                size={size}
                color={focused ? 'white' : hexToRgba('000000', 0.2)}
              />
            ),
          }}
        />
      </Tab.Navigator>
    </NavigationContainer>
  );
}

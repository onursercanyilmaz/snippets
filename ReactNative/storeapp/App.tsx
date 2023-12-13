import {Dimensions} from 'react-native';
import React from 'react';
import {createBottomTabNavigator} from '@react-navigation/bottom-tabs';
import {NavigationContainer} from '@react-navigation/native';
import HomeStackRouter from './src/routers/HomeStackRouter';
import SettingsStackRouter from './src/routers/SettingsStackRouter';
import Icon from 'react-native-vector-icons/FontAwesome';
import {useSelector} from 'react-redux';
import AuthStackRouter from './src/routers/AuthStackRouter';

const Tab = createBottomTabNavigator();

export default function App() {
  const {isAuthenticated, user} = useSelector((state: any) => state.auth);

  const hexToRgba = (hex: string, alpha: any) => {
    const r = parseInt(hex.slice(1, 3), 16);
    const g = parseInt(hex.slice(3, 5), 16);
    const b = parseInt(hex.slice(5, 7), 16);
    return `rgba(${r}, ${g}, ${b}, ${alpha})`;
  };
  return (
    <>
      <NavigationContainer>
        {isAuthenticated ? (
          <Tab.Navigator
            initialRouteName="Home"
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
        ) : (
          <AuthStackRouter />
        )}
      </NavigationContainer>
    </>
  );
}
function createStackNavigator() {
  throw new Error('Function not implemented.');
}

// App.js
import * as React from 'react';
import {View, Text} from 'react-native';
import {NavigationContainer} from '@react-navigation/native';
import {createNativeStackNavigator} from '@react-navigation/native-stack';

const Stack = createNativeStackNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen name="Home" component={HomeScreen} />
        <Stack.Screen name="About" component={AboutScreen} />
      </Stack.Navigator>
    </NavigationContainer>
  );
}

interface AboutScreenProps {
  navigation: any;
  route: any;
}
export function AboutScreen(props: AboutScreenProps) {
  return (
    <View style={{flex: 1, alignItems: 'center', justifyContent: 'center'}}>
      <Text>About Screen {props.route.params.name} </Text>
    </View>
  );
}

// Homescreen.js
import {Button} from 'react-native';

type HomeScreenProps = {
  navigation: any;
};

export function HomeScreen(props: HomeScreenProps) {
  return (
    <View style={{flex: 1, alignItems: 'center', justifyContent: 'center'}}>
      <Text>Home Screen</Text>
      <Button
        title="Go to About"
        onPress={() => props.navigation.navigate('About', {name: 'Jane'})}
      />
    </View>
  );
}

// App.js
import * as React from 'react';
import {View, Text, FlatList} from 'react-native';
import {NavigationContainer} from '@react-navigation/native';
import {createNativeStackNavigator} from '@react-navigation/native-stack';

const Stack = createNativeStackNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen name="Home" component={HomeScreen} />
        <Stack.Screen
          name="Profile"
          component={ProfileScreen}
          options={{title: 'Deneme'}}
        />
      </Stack.Navigator>
    </NavigationContainer>
  );
}

interface ProfileScreenProps {
  navigation: any;
  route: any;
}
export function ProfileScreen(props: ProfileScreenProps) {
  const person = React.useMemo(() => {
    return props.route.params.person;
  }, [props.route.params.id]);

  React.useEffect(() => {
    props.navigation.setOptions({title: person.name + "'s Profile"});
  }, [person]);

  return (
    <View style={{flex: 1, alignItems: 'center', justifyContent: 'center'}}>
      <Text>Age: {person.age}</Text>
      <Text>Job: {person.job}</Text>
      <Text>Bio: {person.bio}</Text>
    </View>
  );
}

// Homescreen.js
import {Button} from 'react-native';

type HomeScreenProps = {
  navigation: any;
};

const people = [
  {id: 0, name: 'Jane', age: 18, job: 'designer', bio: 'Lorem ipsum'},
  {id: 1, name: 'John', age: 20, job: 'developer', bio: 'Lorem ipsum'},
  {id: 2, name: 'Bob', age: 22, job: 'manager', bio: 'Lorem ipsum'},
];

export function HomeScreen(props: HomeScreenProps) {
  return (
    <View style={{flex: 1, alignItems: 'center', justifyContent: 'center'}}>
      <Text>Home Screeeeen</Text>

      <FlatList
        data={people}
        renderItem={({item}) => {
          return (
            <Button
              title={item.name}
              onPress={() => {
                props.navigation.navigate('Profile', {person: item});
              }}
            />
          );
        }}></FlatList>
    </View>
  );
}

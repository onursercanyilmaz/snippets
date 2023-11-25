import {View, Text, SafeAreaView, Button, StyleSheet} from 'react-native';
import React from 'react';

export default function App() {
  return (
    <SafeAreaView style={myStyle.container}>
      <View style={myStyle.upperView}>
        <Text style={myStyle.text}>App</Text>
      </View>
      <View style={myStyle.lowerView}>
        <Text style={myStyle.text}>App</Text>
      </View>
      <View style={myStyle.buttonView}>
        <Button
          title="Hello"
          onPress={() => console.log('Button pressed')}
          color={'purple'}
        />
      </View>
    </SafeAreaView>
  );
}

const myStyle = StyleSheet.create({
  container: {
    //total flex 1
    flex: 1,
    flexDirection: 'column',
    backgroundColor: 'white',
    justifyContent: 'space-around',
    alignItems: 'center',
  },
  text: {
    color: 'red',
    fontSize: 20,
  },
  upperView: {
    backgroundColor: 'yellow',
    width: 75,
    height: 75,
  },
  lowerView: {
    backgroundColor: 'pink',
    width: 75,
    height: 75,
  },
  buttonView: {
    backgroundColor: 'red',
    width: 75,
    height: 75,
    justifyContent: 'center',
  },
});

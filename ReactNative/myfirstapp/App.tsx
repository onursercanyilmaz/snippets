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
      <Button
        title="Hello"
        onPress={() => console.log('Button pressed')}
        color={'red'}
      />
    </SafeAreaView>
  );
}

const myStyle = StyleSheet.create({
  container: {
    //total flex 1
    flex: 1,
  },
  text: {
    color: 'red',
    fontSize: 20,
  },
  upperView: {
    flex: 1, //stretch as you can in the parent
    backgroundColor: 'yellow',
  },
  lowerView: {
    flex: 1,
    backgroundColor: 'blue',
  },
});

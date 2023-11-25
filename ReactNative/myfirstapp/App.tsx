import {View, Text, SafeAreaView, Button, StyleSheet} from 'react-native';
import React from 'react';

export default function App() {
  return (
    <SafeAreaView>
      <View>
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
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
  text: {
    color: 'red',
    fontSize: 20,
  },
});

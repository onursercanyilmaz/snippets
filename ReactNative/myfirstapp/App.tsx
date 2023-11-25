import {
  View,
  Text,
  SafeAreaView,
  StyleSheet,
  TouchableOpacity,
  Button,
} from 'react-native';
import React from 'react';

export default function App() {
  return (
    <SafeAreaView style={styles.container}>
      <View style={styles.card_container}>
        <View style={styles.card_body}>
          <Text style={styles.card_title}>Onur Sercan Yılmaz</Text>
          <Text style={styles.card_text}>Software Engineer</Text>
        </View>
        <TouchableOpacity style={styles.button_container}>
          <Text onPress={() => {}} style={styles.button}>
            + ADD
          </Text>
        </TouchableOpacity>
      </View>
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#e0e0e0',
    alignItems: 'center',
    justifyContent: 'center',
  },
  card_container: {
    backgroundColor: '#fff',

    borderWidth: 1,
    borderColor: 'grey',
    borderRadius: 10,
    margin: 10,
  },
  card_body: {
    padding: 10,
  },
  card_title: {
    fontSize: 30,
    fontWeight: 'bold',
    margin: 10,
    marginBottom: 0,
  },
  card_text: {
    fontSize: 20,
    margin: 10,
    marginTop: 5,
  },
  button_container: {
    backgroundColor: 'aqua',
    padding: 10,
    alignItems: 'center',
    borderBottomEndRadius: 10,
    borderBottomStartRadius: 10,
  },
  button: {
    fontWeight: 'bold',
    color: '#fff',
    fontSize: 20,
  },
});

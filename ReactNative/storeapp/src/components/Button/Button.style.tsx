import {Dimensions, StyleSheet} from 'react-native';

export default {
  primary: StyleSheet.create({
    container: {
      flex: 1,
      justifyContent: 'center',
      backgroundColor: '#be2945',
      borderRadius: 50,
      alignItems: 'center',
      width: Dimensions.get('window').width - 200,
      alignContent: 'center',
      alignSelf: 'center',
      marginTop: 20,
      marginBottom: 20,
    },

    label: {
      color: '#fff',
      fontSize: 20,
      fontWeight: 'bold',
      marginBottom: 10,
      textAlign: 'center',
    },
  }),

  secondary: StyleSheet.create({
    container: {
      flex: 1,
      justifyContent: 'center',
      backgroundColor: '#fff',
      borderRadius: 50,
      alignItems: 'center',
      width: Dimensions.get('window').width - 200,
      alignContent: 'center',
      alignSelf: 'center',
      marginTop: 20,
      marginBottom: 20,
    },

    label: {
      color: '#be2945',
      fontSize: 20,
      fontWeight: 'bold',
      marginBottom: 10,
      textAlign: 'center',
    },
  }),
};

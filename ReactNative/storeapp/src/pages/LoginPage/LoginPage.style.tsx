import {Dimensions, StyleSheet} from 'react-native';

export default StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#000101',
  },

  topContainer: {
    flex: 1,
    backgroundColor: '#be2945',
    borderBottomEndRadius: 75,
    borderBottomStartRadius: 75,
    minHeight: 100,
  },

  middleContainer: {
    flex: 1.5, // Adjust the flex value as needed
    justifyContent: 'center', // Center content vertically
    alignItems: 'center', // Center content horizontally
  },

  bottomContainer: {
    flex: 0.5, // Adjust the flex value as needed
  },

  logo: {
    width: Dimensions.get('window').width - 100,
    height: 200,
    alignSelf: 'center',
    marginTop: 50,
    objectFit: 'contain',
    marginBottom: 50,
  },
});
